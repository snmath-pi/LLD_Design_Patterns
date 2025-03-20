public class BookingFacade {
    public void createBooking(User user, String event) {
        TicketSystem ticket = new TicketSystem();
        PaymentSystem payment = new PaymentSystem();
        NotificationSystem notification = new NotificationSystem();

        boolean isTicketAvailable = ticket.checkTicketAvailability(event);
        if(isTicketAvailable) {
            ticket.createTicket(100, event);
            payment.chargeCard();
            notification.sendEmail(user, ticket.getTicketNumber());
            notification.sendSMS(user, ticket.getTicketNumber());
        }
    }
}
