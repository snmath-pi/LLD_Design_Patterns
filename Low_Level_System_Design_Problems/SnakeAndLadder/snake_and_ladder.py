import random
import threading
from abc import ABC, abstractmethod

# Strategy Pattern for Dice
class Dice(ABC):
    @abstractmethod
    def roll(self):
        pass

class StandardDice(Dice):
    def __init__(self, faces=6):
        self.faces = faces
    
    def roll(self):
        return random.randint(1, self.faces)

# Singleton Pattern for Board (Thread-Safe)
class Board:
    _instance = None
    _lock = threading.Lock()
    
    def __new__(cls, size=100, snakes=None, ladders=None):
        with cls._lock:
            if cls._instance is None:
                cls._instance = super(Board, cls).__new__(cls)
            cls._instance.size = size
            cls._instance.snakes = snakes if snakes else {}
            cls._instance.ladders = ladders if ladders else {}
        return cls._instance
    
    def move(self, position):
        if position in self.snakes:
            print(f"Bitten by snake! Moving from {position} to {self.snakes[position]}")
            return self.snakes[position]
        elif position in self.ladders:
            print(f"Climbed a ladder! Moving from {position} to {self.ladders[position]}")
            return self.ladders[position]
        return position

# Observer Pattern for Player Movement (Thread-Safe)
class Player:
    def __init__(self, name):
        self.name = name
        self.position = 1
        self.lock = threading.Lock()
    
    def move(self, steps, board):
        with self.lock:
            new_position = self.position + steps
            if new_position > board.size:
                print(f"{self.name} rolled {steps} but needs exactly {board.size - self.position} to win.")
                return False
            self.position = board.move(new_position)
            return self.position == board.size

# Factory Pattern for Game Initialization
class Game:
    def __init__(self, board_size, snakes, ladders, dice_type, num_dice, players):
        self.board = Board(board_size, snakes, ladders)
        self.dice = self.create_dice(dice_type, num_dice)
        self.players = [Player(name) for name in players]
        self.winner = None
        
        self.lock = threading.Lock()  # Fix: Corrected typo
    
    def create_dice(self, dice_type, num_dice):
        if dice_type == "standard":
            return [StandardDice(6) for _ in range(num_dice)]
        raise ValueError("Unsupported dice type")
    
    def roll_dice(self):
        return sum(dice.roll() for dice in self.dice)
    
    def play_turn(self, player):
        with self.lock:
            input(f"{player.name}, press Enter to roll the dice...")
            roll_value = self.roll_dice()
            print(f"{player.name} rolled a total of {roll_value}")
            if player.move(roll_value, self.board):
                print(f"{player.name} wins!")
                self.winner = player.name
                return True
        return False
    
    def play(self):
        while not self.winner:
            for player in self.players:
                if self.play_turn(player):
                    return

# Configuration
snakes = {16: 6, 47: 26, 49: 11, 62: 19, 87: 24, 93: 73, 95: 75, 98: 78}
ladders = {2: 38, 7: 14, 8: 31, 15: 26, 21: 42, 28: 84, 36: 44, 51: 67, 71: 91, 78: 98, 87: 94}
players = ["Alice", "Bob"]
game = Game(board_size=100, snakes=snakes, ladders=ladders, dice_type="standard", num_dice=2, players=players)
game.play()
