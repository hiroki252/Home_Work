## 1. Nếu các khái niệm sau: Địa chỉ mạng, Địa chỉ Broadcast, Địa chỉ Host, Địa chỉ Loopback, Subnet Mask, Default Gateway. ##

- **Địa chỉ mạng** : địa chỉ mạng là địa chỉ được cấp cho từng mạng riêng
- **Địa chỉ Broacast** : địa chỉ Broacast là địa chỉ quảng bá cho một Subnet theo chiều từ PC đến tất cả các PC trong cùng Subnet
- **Địa chỉ Host** là địa chỉ mạng được cấp cho từng thiết bị sử dụng mạng trong hệ thống mạng 
- **Địa chị Loopback**: dùng để kiểm tra thiết bị mạng có sử dụng địa chỉ IP hay không ( VD: 127.0.0.1 )
- **Subnet Mask** : Dùng để máy xác định địa chỉ trên mạng đó là địa chỉ IP thuộc lớp Ip nào ( VD: 192.168.1.1 ---> 255.255.255.0 )
- **Default Gateway** : là địa chị mặc định của Router mạng

## 2. Vì sao Phải chia IP? Kiểu chia Subnetting, kiểu chia VSLM là gì? CIDR là gì? ##

-**Vì sao Phải chia IP** : dùng để xác định được địa chỉ của các thành phần tham gia vào mạng

- **Kiểu chia Subnetting** : cách chia này rất dễ và hoàn toàn không cần nhiều tính toán.
Đặc điểm củ phép chia này đó là khi chúng ta chia mạng con ra từ một Major
network
nào đó thì tất cả các địa chỉ IP con này đều có chung một subnet.
Cụ thể như sau:
ví dụ có major network sau: 192.168.0.0/16
khi chia ra 5 mạng con, thì tất cả mạng con sẽ có cùng một subnet. Cụ thể
ta có thể
chia major network này ra 5 mạng con như sau:

192.168.1.0/24

192.168.2.0/24

192.168.3.0/24
...


- **kiểu chia VSLM là gì** : VLSM, nó là cụm từ viết tắt của: Variable Length Subnet Masking
Cách chia VLSM sinh ra nhằm mục đích tận dụng tối đa số địa chỉ IP

của một major network nào đó.

Đầu tiên, ví dụ ta có địa chỉ này: 192.168.0.0/16

Đây là địa chỉ IP của lớp B. Giả sử ta cần chia Major network này ra làm

5 mạng con như sau:

Lan 1: 200 host

Lan 2: 200 host

Lan 3: 100 host

Lan 4: 50 host

Lan 5: 2 host

-------

Lan 1: 200 host (2^8 = 256)

Như vậy ta cần mượn 8 bit từ phần net cho phần host.

Địa chỉ IP của Lan 1 sẽ là: 192.168.0.0/24

Lan 2: 200 host cũng tương tự thì mạng này cũng cần mượn  8 bit từ phần
net.

Cho nên địa chỉ IP của Lan 2 sẽ là : 192.168.1.0/24

dư ra 56 IP không đủ cho Lan 3 nên:

Lan 3: 100 host (2^7=128)

như vậy cần mượn 7 bit từ phần net.

địa chỉ của Lan 3 sẽ là: 192.168.2.0/25

Lan 4: 50 host (2^6=64)

cho nên cần mượn 6 bit từ phần net.

Cụ thể, IP của Lan 4 sẽ là: 192.168.2.128/26

Lan 5: 2 host (2^2=4)

cho nên, Lan 5 sẽ có địa chỉ như sau: 192.168.2.192/30


- **CIDR là gì** : CIDR (Classless Inter-Domain Routing) là một lược đồ địa chỉ mới cho Internet, nó cho phép sử dụng hiệu quả tài nguyên địa chỉ IP hơn là mô hình lược đồ địa chỉ chia thành các lớp A, B, C cũ

