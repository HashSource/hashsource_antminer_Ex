int __fastcall sub_24B478(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v8; // [sp+0h] [bp-2Ch] BYREF
  _BYTE v9[36]; // [sp+4h] [bp-28h] BYREF

  v8 = 0;
  v3 = sub_24B3D8(&v8);
  sub_259F38("Data collected at tracepoint %d, trace frame %d:\n", dword_48A8C0, dword_48A8BC);
  v4 = ((int (__fastcall *)(_BYTE *))loc_23FF48)(v9);
  v5 = sub_15F734(v4);
  sub_15E134(v5);
  v6 = sub_24A640(v3[4]);
  sub_24882C(v6, 0, v8, a2);
  return ((int (__fastcall *)(_BYTE *))loc_23FCB4)(v9);
}
