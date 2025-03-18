public class PC extends Computer {
    String  RAM,HDD,CPU;
    public PC(String RAM, String HDD, String CPU){
        this.CPU = CPU;
        this.RAM = RAM;
        this.HDD = HDD;

    }
    @Override
    String getRAM() {
        return RAM;
    }

    @Override
    String getHDD() {
        return HDD;
    }

    @Override
    String getCPU() {
        return CPU;
    }
}
