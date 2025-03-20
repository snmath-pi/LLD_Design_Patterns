package Singleton_Design_Pattern;

public class Singleton {
    public static void main(String[] args) {
        LoggerSingleton loggerObj1 = LoggerSingleton.getInstance();
        loggerObj1.log("This is a log message");

        LoggerSingleton loggerObj2 = LoggerSingleton.getInstance();
        loggerObj2.log("This is another log message");

        if (loggerObj1 == loggerObj2) {
            System.out.println("Both objects are the same instance");
            System.out.println("Hashcode of loggerObj1: " + loggerObj1.hashCode());
            System.out.println("Hashcode of loggerObj2: " + loggerObj2.hashCode());
        } else {
            System.out.println("Both objects are different instances");
        }
        
    }
}
