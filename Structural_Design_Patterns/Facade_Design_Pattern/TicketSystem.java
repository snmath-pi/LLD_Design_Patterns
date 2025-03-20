public class TicketSystem {
    public boolean checkTicketAvailability(String event) {
        return true;
    }

    public void createTicket(int ticketNumber, String event) {
        System.out.println("Ticket created for event: " + event + " with number: " + ticketNumber);
    }
    public int getTicketNumber() {
        return 100;
    }
}
