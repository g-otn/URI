import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

// URI Online Judge | 1168
// LED

public class URI_1168 {

    private static final int[] numeroLedsPorDigito = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    public static void main(String[] args) throws IOException {
        BufferedReader leitor = new BufferedReader(new InputStreamReader(System.in));

        int numeroCasosTeste = Integer.parseInt(leitor.readLine());

        for (int i = 0; i < numeroCasosTeste; i++) {
            String valorPainel = leitor.readLine();
            int numeroTotalLeds = 0;

            for (int d = 0; d < valorPainel.length(); d++) {
                int charDigito = Character.getNumericValue(valorPainel.charAt(d));
                numeroTotalLeds += numeroLedsPorDigito[charDigito];
            }

            System.out.println(numeroTotalLeds + " leds");
        }
    }

}
