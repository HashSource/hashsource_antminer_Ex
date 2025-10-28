int __fastcall sub_A1864(int a1)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r0

  if ( *(_DWORD *)nullsub_31(a1) && *(_DWORD *)nullsub_31(a1) != 3 )
    return a1;
  v3 = sub_26BC98(a1);
  v4 = sub_A0898(v3);
  v5 = sub_261320(*(_DWORD *)(v4 + 20));
  v6 = sub_26EB44(v5);
  *(_DWORD *)nullsub_31(a1) = 1;
  sub_26C1A0(a1, v6);
  v7 = sub_26E9A0(a1);
  sub_FAB08(v6, v7);
  return a1;
}
