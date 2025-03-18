public class PcFactory implements ComputerAbstractFactory {
    String RAM, CPU, HDD;
    public PcFactory(String RAM, String CPU, String HDD) {
        this.RAM = RAM;
        this.CPU = CPU;
        this.HDD = HDD;
    }

    @Override
    public Computer createComputer() {
        return new PC(RAM, HDD, CPU);
    }
}
