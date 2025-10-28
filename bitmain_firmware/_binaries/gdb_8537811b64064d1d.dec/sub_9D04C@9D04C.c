int __fastcall sub_9D04C(int a1)
{
  int v2; // r4
  void *v3; // r6
  int v4; // r7
  int v5; // r0
  unsigned __int8 v6; // r4

  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 16) + 136) && *(_DWORD *)(v2 + 240) )
  {
    v3 = sub_92E50();
    v4 = sub_26C208(v3);
    v5 = sub_14CD64(*(_DWORD *)(v2 + 240));
    v6 = sub_19434C(v5);
    sub_26C328(v4);
    sub_92E68((int)v3);
    *(_BYTE *)(a1 + 25) = v6;
    return v6;
  }
  else
  {
    *(_BYTE *)(a1 + 25) = 1;
    return 1;
  }
}
