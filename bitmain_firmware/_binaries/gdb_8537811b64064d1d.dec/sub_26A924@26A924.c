void __fastcall sub_26A924(_BYTE *a1)
{
  void *v1; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  sub_1C42D0((char **)&ptr, a1);
  v1 = ptr;
  if ( !*((_DWORD *)ptr + 2) || *((_DWORD *)ptr + 4) != 21 )
    sub_94708("Init-if-undefined requires an assignment expression.");
  if ( *((_DWORD *)ptr + 8) != 45 )
    sub_94708("The first parameter to init-if-undefined should be a GDB variable.");
  if ( *(_DWORD *)(*((_DWORD *)ptr + 12) + 8) || (sub_14CD64((int *)ptr), (v1 = ptr) != 0) )
    free(v1);
}
