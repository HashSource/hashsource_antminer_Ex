_DWORD *__fastcall sub_27AF38(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r12

  v2 = sub_930BC(1u, 0x1Cu);
  v2[4] = sub_27A790;
  *v2 = a1;
  v2[3] = "-std=gnu11 -fno-exceptions";
  v3 = sub_323B08(10, sub_27A758, sub_27A76C, sub_27A784, sub_930BC, sub_27A784);
  v4 = *(_DWORD *)(a1 + 4);
  v2[5] = v3;
  (*(void (__fastcall **)(int, _DWORD, __int64 (__fastcall *)(_DWORD *, int, char *), _DWORD *))(v4 + 4))(
    a1,
    sub_279CC4,
    sub_27A0B0,
    v2);
  return v2;
}
