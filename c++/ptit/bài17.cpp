@startuml
start

:Kh?i t?o d? li?u;
:Kh?i t?o c�c bi?n;

:Hi?n th? th�ng b�o "NHAP 10 SO:";
:Nh?p 10 s? t? ngu?i d�ng;

:Kh?i t?o bi?n t?ng (SUM = 0);

repeat
    :Nh?p s? t? ngu?i d�ng;
    :Ki?m tra xem s? c� chia h?t cho 7 kh�ng;

    if (chia h?t cho 7) then (true)
        :C?ng s? v�o t?ng (SUM);
    else (false)
    endif

    :Hi?n th? kho?ng tr?ng;
repeat while (d� nh?p d? 10 s?);

:Hi?n th? t?ng c�c s? v?a nh?p;

stop
@enduml

