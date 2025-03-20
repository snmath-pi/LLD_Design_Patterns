public class NotificationSystem {
    public void sendEmail(User user, int ticketNumber) {
        System.out.println("Email sent to " + user.getName() + " with email: " + user.getEmail() + " with ticket number: " + ticketNumber);
    }

    public void sendSMS(User user, int ticketNumber) {
        System.out.println("SMS sent to " + user.getName() + " with phone number: " + user.getPhoneNumber() + " with ticket number: " + ticketNumber);
    }
}
