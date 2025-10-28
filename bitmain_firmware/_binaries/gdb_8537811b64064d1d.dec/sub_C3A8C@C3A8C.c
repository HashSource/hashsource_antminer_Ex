int __fastcall sub_C3A8C(int a1)
{
  int v1; // r4
  int v2; // r6
  char *v3; // r5
  _BYTE v5[12]; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v6[4]; // [sp+10h] [bp-10h] BYREF
  unsigned int v7; // [sp+14h] [bp-Ch]

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)sub_243004(a1);
  sub_1882AC(v5, v6);
  v3 = sub_C3A54(v7);
  sub_B74F0(*(_DWORD *)(v1 + 24));
  sub_CE2B0(v2);
  sub_259F38("Catchpoint %d (signal %s), ", *(_DWORD *)(v1 + 24), v3);
  return 0;
}
