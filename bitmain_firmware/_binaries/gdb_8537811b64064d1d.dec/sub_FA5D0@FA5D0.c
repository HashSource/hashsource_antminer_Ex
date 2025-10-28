void sub_FA5D0()
{
  int v0; // r4

  if ( *(_DWORD *)(dword_487D2C + 8) && dword_47ACB8 )
  {
    if ( sub_2AA030() )
    {
      v0 = sub_2A8BB0(*(_DWORD *)(dword_487D2C + 8));
      if ( v0 > sub_2A8BB0(dword_47ACB8) )
        sub_946D8("exec file is newer than core file.");
    }
    else
    {
      sub_946D8("core file may not match specified executable file.");
    }
  }
}
