@startuml
start

:Kh?i t?o d? li?u;
:Kh?i t?o các bi?n;

:Hi?n th? thông báo "NHAP 10 SO:";
:Nh?p 10 s? t? ngu?i dùng;

:Kh?i t?o bi?n t?ng (SUM = 0);

repeat
    :Nh?p s? t? ngu?i dùng;
    :Ki?m tra xem s? có chia h?t cho 7 không;

    if (chia h?t cho 7) then (true)
        :C?ng s? vào t?ng (SUM);
    else (false)
    endif

    :Hi?n th? kho?ng tr?ng;
repeat while (dã nh?p d? 10 s?);

:Hi?n th? t?ng các s? v?a nh?p;

stop
@enduml

