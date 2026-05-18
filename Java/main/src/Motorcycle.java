public class  Motorcycle {
    String make = "Yamaha";
    String model = "RZV500";
    int year = 1984;
    double price = 30000.00;
    boolean isRunning = false;

    void start() {
        isRunning = true;
        System.out.printf("The motorcycle is starting.\n");
    }
    void stop() {
        isRunning = false;
        System.out.printf("The motorcycle is stopping.\n");
    }
    void ride () {
        System.out.printf("The are riding the %s.\n ", model);
    }
    void breaking() {
        System.out.printf("The motorcycle is breaking.\n");
    }
}
