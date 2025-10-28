unsigned int __fastcall sub_1E28EC(unsigned int *a1)
{
  int v2; // r0
  int v3; // r0
  int *v4; // r3
  int v5; // r5
  int v6; // r0
  char *v7; // r3
  unsigned int result; // r0

  v2 = sub_16F67C((int)a1);
  v3 = ((int (__fastcall *)(int))loc_1E2798)(v2);
  v4 = (int *)dword_488C94;
  a1[1] = *(_DWORD *)dword_488C94;
  v5 = *v4;
  v6 = sub_1E28B8(v3);
  v7 = (char *)a1[1];
  a1[2] = v5 + v6;
  result = a1[1] + sub_93198(v7, v5 + v6 - (_DWORD)v7, "vCont");
  a1[1] = result;
  *a1 = result;
  return result;
}
