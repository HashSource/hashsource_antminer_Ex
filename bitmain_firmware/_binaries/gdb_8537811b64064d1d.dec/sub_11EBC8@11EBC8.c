int sub_11EBC8()
{
  int v0; // r6
  int v1; // r5
  int i; // r4
  int v3; // r0

  v0 = 0;
  ((void (*)(void))loc_11EB44)();
  v1 = *(_DWORD *)(dword_4872D8 + 352) + *(_DWORD *)(dword_4872D8 + 356);
  if ( v1 > 0 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = i;
      if ( !*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int))loc_11E18C)(v3) + 24) + 4) )
        ++v0;
    }
    v1 -= v0;
  }
  sub_259F38("  Number of read CUs: %d\n", v1);
  return sub_259F38("  Number of unread CUs: %d\n", v0);
}
