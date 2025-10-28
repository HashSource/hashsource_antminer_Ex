int __fastcall sub_231C90(int *a1)
{
  int *v1; // r2
  __int64 v4; // r0

  if ( a1[78] )
  {
    v1 = (int *)dword_489F70;
    if ( dword_489F70 )
    {
      if ( (int *)dword_489F70 == a1 )
      {
        v1 = &dword_489F70;
LABEL_9:
        *v1 = *a1;
        *a1 = 0;
        sub_22DE40();
        ((void (__fastcall *)(int *))loc_231B00)(a1);
        return 1;
      }
      else
      {
        while ( *v1 )
        {
          if ( (int *)*v1 == a1 )
            goto LABEL_9;
          v1 = (int *)*v1;
        }
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = sub_94728((int)"target.c", 695, "Attempt to unpush the dummy target");
    return sub_231D2C(v4, HIDWORD(v4));
  }
}
