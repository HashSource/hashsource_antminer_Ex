int __fastcall json_array_set_new(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != a3 && a2 < a1[3] )
  {
    sub_54798(*(_DWORD *)(a1[4] + 4 * a2));
    *(_DWORD *)(a1[4] + 4 * a2) = a3;
    return 0;
  }
  else
  {
    sub_54798((int)a3);
    return -1;
  }
}
