public class Lasagna {
	int prepareMinutes = 2;
	public int expectedMinutesInOven() {
		return 40;
	}

	public int remainingMinutesInOven(int actualMinutes) {
		int expectedMinutes = new Lasagna().expectedMinutesInOven();
		return expectedMinutes - actualMinutes;
	}

	public int preparationTimeInMinutes(int numberOfLayers) {
		return numberOfLayers * prepareMinutes;
	}

	public int totalTimeInMinutes(int numberOfLayers, int minutesInOven) {
		int minutesPreparation = new Lasagna().preparationTimeInMinutes(numberOfLayers);
		return minutesPreparation + minutesInOven;
	}
}
