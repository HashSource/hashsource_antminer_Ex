int __fastcall sub_A0C30(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v6; // r0

  v1 = sub_A0A88(a1);
  v2 = v1;
  if ( v1 )
  {
    if ( sub_A0AE0(v1) )
    {
      v6 = sub_A0F84(v2);
      if ( v6 )
      {
        v4 = sub_1728B0(v6, "BOUNDS", 1);
        if ( v4 )
          return sub_A0898(v4);
      }
    }
    else if ( **(_BYTE **)(v2 + 24) == 3 )
    {
      v3 = sub_1728B0(v2, "P_BOUNDS", 1);
      if ( v3 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(sub_A0898(v3) + 24) + 20);
        return sub_A0898(v4);
      }
    }
  }
  return 0;
}
