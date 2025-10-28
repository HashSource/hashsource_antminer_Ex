_DWORD *__fastcall sub_191E40(int a1, int a2)
{
  int v3; // r7
  int v4; // r4
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r4

  v3 = *(_DWORD *)(a1 + 12);
  v4 = sub_15ECDC(*(_DWORD *)(v3 + 4));
  v5 = ((int (__fastcall *)(int, int))loc_16772C)(v4, a2);
  v6 = ((int (__fastcall *)(int, int))loc_1DD448)(v4, v5);
  v7 = sub_93050(v6 + 15);
  v7[1] = sub_15E940(*(_DWORD *)(v3 + 4), v5, (int)(v7 + 3));
  *v7 = v6;
  v7[2] = sub_191D84;
  return v7;
}
