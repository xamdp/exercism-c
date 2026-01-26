public class Lasagna {
	int expectedMinutes = 40;
	int prepareMinutes = 2;
    // TODO: define the 'expectedMinutesInOven()' method
	public int expectedMinutesInOven() {
		return expectedMinutes;
	}

    // TODO: define the 'remainingMinutesInOven()' method
	public int remainingMinutesInOven(int actualMinutes) {
		return expectedMinutes - actualMinutes;
	}

    // TODO: define the 'preparationTimeInMinutes()' method
	public int preparationTimeInMinutes(int numberOfLayers) {
		return numberOfLayers * prepareMinutes;
	}

    // TODO: define the 'totalTimeInMinutes()' method
	public int totalTimeInMinutes(int numberOfLayers, int minutesInOven) {
		int minutesPreparation = new Lasagna().preparationTimeInMinutes(numberOfLayers);
		return minutesPreparation + minutesInOven;
	}
}
