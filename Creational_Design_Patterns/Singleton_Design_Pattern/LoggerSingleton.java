package Singleton_Design_Pattern;

public class LoggerSingleton {
    private static volatile LoggerSingleton instance = null;

    private LoggerSingleton() {
        // Private constructor to prevent instantiation
        if(instance == null) {
            System.out.println("Please don't try to be smart and create me");
        }
    }

    public static LoggerSingleton getInstance() {
        // Eagerly create the instance
        // ensures the thread safety
        if (instance == null) {
            synchronized (LoggerSingleton.class) {
                if (instance == null) {
                    instance = new LoggerSingleton();
                }
            }
        }
        return instance;
    }

    public void log(String message) {
        System.out.println("Log: " + message);
    }
}