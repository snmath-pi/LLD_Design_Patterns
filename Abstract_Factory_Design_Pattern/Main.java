public class Main {
    public static void main(String[] args) {
        Computer PC = ComputerFactory.getComputer(new PcFactory("2GB", "1TB", "i7"));

        System.out.println(PC);
    }
}