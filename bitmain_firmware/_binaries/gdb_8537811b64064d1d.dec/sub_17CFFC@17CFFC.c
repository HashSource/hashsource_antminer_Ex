void __fastcall sub_17CFFC(int a1, int a2)
{
  void *v2; // r5

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( !dword_487950 && sub_22EBE4(1) && off_489AF8(&dword_4899A0) )
        sub_23293C(0);
      if ( !sub_98FA0(&dword_4878EC, &dword_475848) )
        sub_F8548(0);
      if ( *(_DWORD *)(dword_487668 + 36) )
      {
        sub_243494();
        v2 = sub_92E50();
        sub_D4148();
        sub_92E68((int)v2);
      }
    }
    else
    {
      sub_259880("Event type not recognized.\n");
    }
  }
  else
  {
    sub_1903C8(a2);
  }
}
