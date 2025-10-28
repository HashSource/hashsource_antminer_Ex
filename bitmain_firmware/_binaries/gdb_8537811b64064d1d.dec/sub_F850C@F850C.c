_DWORD *__fastcall sub_F850C(int a1, int a2, int a3)
{
  int v6; // r4
  _DWORD *result; // r0
  int v8; // r3

  v6 = sub_1836B0(a1);
  result = sub_93050(0x10u);
  v8 = *(_DWORD *)(v6 + 136);
  result[1] = a1;
  result[2] = a3;
  *result = v8;
  result[3] = a2;
  *(_DWORD *)(v6 + 136) = result;
  return result;
}
