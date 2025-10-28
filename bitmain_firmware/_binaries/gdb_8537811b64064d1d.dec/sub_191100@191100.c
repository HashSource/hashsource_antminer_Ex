int __fastcall sub_191100(int *a1)
{
  int *v1; // r4
  int v2; // r5
  int v4; // r0

  v1 = (int *)sub_15D708(a1);
  if ( v1 )
  {
    v2 = 0;
    while ( sub_15DAB4((int)v1) == 2 )
    {
      v1 = (int *)sub_15D708(v1);
      ++v2;
      if ( !v1 )
        goto LABEL_7;
    }
    return v2;
  }
  v2 = 0;
LABEL_7:
  v4 = ((int (*)(void))loc_190960)();
  if ( !v4 )
    return v2;
  return v2 + *(_DWORD *)(v4 + 12);
}
