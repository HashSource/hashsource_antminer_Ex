_DWORD *__fastcall sub_3452C0(_DWORD *a1, int *a2)
{
  int v3; // r3

  v3 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_3451CC(a2);
    v3 = *a2;
  }
  *a1 = v3 + *(_DWORD *)(v3 - 12);
  return a1;
}
