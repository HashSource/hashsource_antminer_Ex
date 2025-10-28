_DWORD *__fastcall sub_251974(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r3
  _BYTE v8[16]; // [sp+0h] [bp-10h] BYREF

  ((void (__fastcall *)(int, int, _BYTE *))loc_25183C)(a3, a4, v8);
  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 8) = 0;
  sub_33BB5C((int)a1, 43, 0);
  v6 = *(_DWORD *)(a4 + 20);
  switch ( v6 )
  {
    case 8:
      sub_33226C(v8, *a1);
      return a1;
    case 16:
      sub_3332E4(v8, *a1);
      return a1;
    case 4:
      sub_331E2C(v8, *a1);
      return a1;
    default:
      sub_94708("Unknown decimal floating point type.");
  }
}
