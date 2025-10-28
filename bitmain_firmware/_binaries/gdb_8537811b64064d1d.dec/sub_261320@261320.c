_DWORD *__fastcall sub_261320(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  int v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h] BYREF

  sub_2611EC("malloc", &v8);
  v3 = v2;
  sub_1B7278(v8);
  sub_1780DC();
  v9 = sub_26DB1C(*(_DWORD *)(v4 + 12), v5, a1, a1 >> 31);
  v6 = sub_17E714(v3, 0, 1, (char *)&v9);
  if ( sub_25DC44((int)v6) )
  {
    if ( !sub_22EBE4() )
      sub_94708("No memory available to program now: you need to start the target first");
    sub_94708("No memory available to program: call to malloc failed");
  }
  return v6;
}
