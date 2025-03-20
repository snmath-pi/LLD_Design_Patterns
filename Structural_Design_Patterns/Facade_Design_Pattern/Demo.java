
class Demo {
    
    public static void main(String[] args) {
        facade();
        // nonFacade();
    }
    /*
     * @desc This is the facade way to create a booking
     */
    public static void facade() {
        User user = new User("Saksham", "saksham@gmail.com", 12345678);
        BookingFacade bookingFacade = new BookingFacade();
        bookingFacade.createBooking(user, "movie");
    }

    /*
     * @desc This is the non-facade way to create a booking
     */
    public static void nonFacade() {
        User user = new User("Saksham", "saksham@gmail.com", 12345678);

        TicketSystem ticket = new TicketSystem();
        boolean isTicketAvailable = ticket.checkTicketAvailability("movie");

        if(isTicketAvailable) {
            ticket.createTicket(100, "movie");
        }

        PaymentSystem payment = new PaymentSystem();
        payment.chargeCard();

        NotificationSystem notification = new NotificationSystem();
        notification.sendEmail(user, ticket.getTicketNumber());
        notification.sendSMS(user, ticket.getTicketNumber());
    }
}