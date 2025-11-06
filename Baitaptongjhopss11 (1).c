#include<stdio.h>

int main (){
	
	int choice  ,n , g, c, x ,max , min ;
	int sum = 0 ;
	int arr[100];
	int flag = 0 ;
	printf("______________________________________________Quan ly danh sach so nguyen_______________________________________________ \n");
	
	
	do {
	printf("\n1.Nhap so phan tu va gia tri co trong mang \n");
	printf("\n2.Hien thi mang \n");
	printf("\n3.Tinh tong phan tu co trong mang \n");
	printf("\n4.Them phan tu o vi tri bat ky - Nhap vi tri muon them \n");
	printf("\n5.Xoa phan tu o vi tri bat ky - Nhap vi tri muon xoa \n");
	printf("\n6.Cap nhat gia tri tai vi tri bat ky - Nhap vi tri muon cap nhat \n");
	printf("\n7.Tim kiem phan tu trong mang \n");
	printf("\n8.Sap xep mang \n");
	printf("\n9.Tinh hieu so lon nhat va nho nhat \n");
	printf("\n10.Thoat chuong trinh \n");
	printf("\nMoi nguoi dung nhap lua chon: ");
	scanf ("%d",&choice);
	
		switch (choice) {
            case 1:
                printf("\nNhap so phan tu trong mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("\nNhap gia tri phan tu thu %d: ", i);
                    scanf("%d", &arr[i]);
                    
                }
                flag =1 ;
                break;

            
						
			case 2:
            	if(flag == 0){
            	printf("\nVui long nhap gia tri truoc!!!!!!!!!\n");
            	break ;
            	}
                printf("\nMang hien tai: \n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d \n",i ,arr[i]);
                }
            
                printf("\n");
                break;
			
			
					
			case 3:
				if(flag == 0){
            	printf("\nVui long nhap gia tri truoc!!!!!!!!! \n");
            	break ;
            }
				for (int i = 0 ; i < n ;i++){
				sum += arr[i];				
			}
			printf("\nTong phan tu co trong mang la:%d ",sum);
			break ;
						
			
			
			case 4:
				if(flag == 0){
            	printf("\nVui long nhap gia tri truoc!!!!!!!!!\n");
            	break ;
            }
	            printf("\nNhap vi tri muon them phan tu(0 den %d): ",n);
	            scanf ("%d",&g);
            	if (g < 0 || g > n){
            		printf("\nPhan tu khong co trong mang !!!!!!!!\n");
            		break;
			}
					printf("\nNhap gia tri muon them: ");
					scanf("%d",&g);
			
				for (int i = n ; i > c ;i--){
					arr[i] = arr[i-1];		
			}			
					arr[g] = c ;
					n++;
					printf("\nGia tri %d vua duoc them vao %d ",g,c);
			
                	printf("\nMang sau khi them la:\n");
                for (int i = 0; i < n; i++) {
                    printf("\nGia tri moi trong mang la: arr[%d] = %d\n", i, arr[i]);
                }
                	break;
			
			
			
						
			case 5:
                if (flag == 0) {
                    printf("\nVui long nhap gia tri truoc!!!!!!!!!\n");
                    break;
                }
                int pos;
                	printf("\nNhap vi tri muon xoa (0 den %d): ", n - 1);
                	scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("\nVi tri khong hop le !!!!!!!!\n");
                    break;
                }
                
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                	n--; 
                	printf("\nDa xoa phan tu tai vi tri %d\n", pos);
                	printf("\nMang sau khi xoa la:\n");
                for (int i = 0; i < n; i++) {
                    printf("\nGia tri moi trong mang la:arr[%d] = %d\n", i, arr[i]);
                }
                break;
            
			
						
			case 6:
                if (flag == 0) {
                    printf("Vui long nhap mang truoc!\n");
                    break;
                }
                
                	printf("\nNhap vi tri muon cap nhat (0 den %d): ", n - 1);
                	scanf("%d", &c);
                if (c < 0 || c >= n) {
                    printf("\nVi tri khong hop le!\n");
                    break;
                }
               		printf("\nNhap gia tri moi: ");
                	scanf("%d", &g);
                	arr[c] = g;
                	printf("\nDa cap nhat vi tri %d thanh %d\n", c + 1, g);
                	break;
				 
				 				 
				 
			 case 7: {
                if (flag == 0) {
                   	printf("\nVui long nhap mang truoc!\n");
                   	break;
                }
               	int x, flag07 = 0;
               		printf("\nNhap gia tri can tim: ");
               		scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                       printf("\nTim thay %d tai vi tri thu %d\n", x, i + 1);
                       flag07 = 1;
                    }
                }
                if (flag07 == 0){
				
					printf("\nKhong tim thay %d trong mang!!!!!!!!\n", x);
          			break;
  	         	}
            	
            	
           	case 8:
				if (flag == 0) {
					printf("\nVui long nhap mang truoc!!!!!!!!!\n");
					break;
				}

				for (int i = 0; i < n - 1; i++) {
					for (int j = 0; j < n - i - 1; j++) {
						if (arr[j] > arr[j + 1]) {
							int temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}

				printf("\nMang sau khi sap xep tang dan la:\n");
				for (int i = 0; i < n; i++) {
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;


			case 9:
				if (flag == 0) {
					printf("\nVui long nhap mang truoc!!!!!!!!!\n");
					break;
				}

				for (int i = 1; i < n; i++) {
					if (arr[i] > max) max = arr[i];
					if (arr[i] < min) min = arr[i];
				}

				printf("\nSo lon nhat trong mang la: %d", max);
				printf("\nSo nho nhat trong mang la: %d", min);
				printf("\nHieu giua so lon nhat va nho nhat la: %d\n", max - min);
				break;


				
		}
            
            
            case 10:
				printf("Good bye");
				break;
						
				default:				
				printf("\nVui long chon lai lua chon co trong menu!!!!!!!\n");
				
				}
	}while(choice != 0);
		
 

		
	return 0;
}
