/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package video3;

/**
 *
 * @author Jesus
 */
public class Video3 {

    int arreglo[] = {6, 100, 3, 1, 9, 5, 7, 0, 2, 4, 8, -1};

    public void consultar() {
        for (int i = 0; i < arreglo.length; i++) {
            System.out.println(" Arreglo  : " + arreglo[i]);
        }
    }

    public void ordenar() {
        for (int i = 0; i < arreglo.length - 1; i++) {
            int pos = i; //Posición del número más pequeño
            for (int j = i; j < arreglo.length; j++) {
                if (arreglo[j] > arreglo[pos]) {
                    pos = j;
                }
            }
            if (pos != i) {
                int aux = arreglo[i];
                arreglo[i] = arreglo[pos];
                arreglo[pos] = aux;
            }
        }
    }

    public static void main(String[] args) {
        Video3 obj = new Video3();
        obj.consultar();
        System.out.println("********************");
        obj.ordenar();
        obj.consultar();
    }
}
