#include <stdio.h>  

int main() {
    int n;        
    int i;        
    int pengeluaran;   
    int total = 0;    
    int batas;        
    char nama[30];     

    // Judul program
    printf("Estimasi Pengeluaran Bulanan Mahasiswa\n");

    // Meminta jumlah pengeluaran dari pengguna
    printf("Masukkan jumlah pengeluaran: ");
    scanf("%d", &n);

    // Perulangan untuk input nama dan nominal pengeluaran
    for(i = 1; i <= n; i++) {
        // Input nama pengeluaran ke-i 
        printf("Masukkan nama pengeluaran ke-%d : ", i);
        scanf("%s", nama);

        // Input jumlah uang yang dikeluarkan untuk pengeluaran tersebut
        printf("Masukkan nominal untuk %s (Rp): ", nama);
        scanf("%d", &pengeluaran);

        // Menambahkan nilai pengeluaran ke total
        total += pengeluaran;
    }

    // Meminta batas maksimal anggaran bulanan dari pengguna
    printf("Masukkan batas anggaran bulanan (Rp): ");
    scanf("%d", &batas);

    // Menampilkan total seluruh pengeluaran
    printf("Total pengeluaran kamu💸: Rp%d\n", total);

    // Mengevaluasi apakah pengeluaran melebihi, pas, atau kurang dari anggaran
    if(total > batas) {
        printf("Pengeluaran melebihi anggaran⚠\n");
    } else if(total == batas) {
        printf("Pengeluaran pas sesuai anggaran☑\n");
    } else {
        printf("Masih ada sisa anggaran Rp%d✨\n", batas - total);
    }

    return 0;   
}
