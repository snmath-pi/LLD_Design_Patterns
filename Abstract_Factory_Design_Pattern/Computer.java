public abstract class Computer {
    abstract String getRAM();
    abstract String getHDD();
    abstract String getCPU();

    public String toString() {
        return "||CPU:"+getCPU()+"||RAM:"+getRAM()+"||HDD:"+getHDD();
    }
}
