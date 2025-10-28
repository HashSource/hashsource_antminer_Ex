void __fastcall map_remove_(int *a1, unsigned __int8 *a2)
{
  void *ptr; // [sp+8h] [bp-Ch]
  int v4; // [sp+Ch] [bp-8h]

  v4 = sub_2C7608(a1, a2);
  if ( v4 )
  {
    ptr = *(void **)v4;
    *(_DWORD *)v4 = *(_DWORD *)(*(_DWORD *)v4 + 8);
    free(ptr);
    --a1[2];
  }
}
