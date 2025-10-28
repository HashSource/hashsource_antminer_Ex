int __fastcall stratum_login_vbk(int a1, int a2)
{
  if ( stratum_capabilities_vbk(a1, a2) && (*(int (__fastcall **)(int, int))(a1 + 56))(a1, a2) )
    return (*(int (__fastcall **)(int, int))(a1 + 52))(a1, a2);
  else
    return 0;
}
