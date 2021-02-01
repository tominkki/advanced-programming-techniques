package part01;

public class Main {
  public static void main(String[] args) {
    double[] nums = {12, 21, 11, 22, 3, 4, 5, 6, 10};

    System.out.println(Statistics.sum(nums));
    System.out.println(Statistics.min(nums));
    System.out.println(Statistics.max(nums));
    System.out.println(Statistics.average(nums));
  }
}
