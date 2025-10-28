int __fastcall sub_B8D40(int a1)
{
  int v2; // r5
  int v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = sub_1DD5B4(a1);
  v4 = sub_1DFB64(a1);
  ((void (__fastcall *)(int, int *, int *))loc_1690F4)(v2, &v4, &v5);
  return sub_1DFC88(a1, v4 + v5);
}
