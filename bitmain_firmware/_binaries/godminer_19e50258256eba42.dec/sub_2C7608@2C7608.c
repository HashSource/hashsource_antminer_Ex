int __fastcall sub_2C7608(int *a1, unsigned __int8 *a2)
{
  int v2; // r4
  int v7; // [sp+8h] [bp-14h]
  int i; // [sp+Ch] [bp-10h]

  v7 = sub_2C72AC(a2);
  if ( a1[1] )
  {
    v2 = *a1;
    for ( i = v2 + 4 * sub_2C73F8((int)a1, v7); *(_DWORD *)i; i = *(_DWORD *)i + 8 )
    {
      if ( v7 == **(_DWORD **)i && !strcmp((const char *)(*(_DWORD *)i + 12), (const char *)a2) )
        return i;
    }
  }
  return 0;
}
