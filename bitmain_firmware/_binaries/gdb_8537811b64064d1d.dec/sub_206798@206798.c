int __fastcall sub_206798(int *a1, int a2)
{
  int *v3; // r5
  int result; // r0

  if ( *a1 == -1 )
    JUMPOUT(0x16FD6C);
  v3 = sub_206308(a1, a2);
  result = *v3;
  if ( !*v3 )
  {
    result = ((int (__fastcall *)(int))loc_16FD6C)(a2);
    *v3 = result;
  }
  return result;
}
