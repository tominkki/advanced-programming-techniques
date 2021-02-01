package part01;

public class Statistics {

  private Statistics() {}

  public static double sum(double[] params) {
    double sum = 0;
    for (double num : params) {
      sum += num;
    }
    return sum;
  }

  public static double min(double[] params) {
    double min = Double.POSITIVE_INFINITY;
    for (double num : params) {
      if (num < min) {
        min = num;
      }
    }
    return min;
  }

  public static double max(double[] params) {
    double max = Double.NEGATIVE_INFINITY;
    for (double num : params) {
      if (num > max) {
        max = num;
      }
    }
    return max;
  }

  public static double average(double[] params) {
    return sum(params) / params.length;
  }
}
