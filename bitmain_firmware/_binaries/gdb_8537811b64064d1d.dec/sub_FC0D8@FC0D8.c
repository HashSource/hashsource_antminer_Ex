int sub_FC0D8()
{
  char *v0; // r0

  dword_47AD10 = (int)"core";
  dword_47AD14 = (int)"Local core dump file";
  dword_47AD18 = (int)"Use a core file as a target.  Specify the filename of the core file.";
  dword_47AD20 = (int)sub_FB9E0;
  dword_47AD28 = (int)sub_FB928;
  dword_47AD34 = (int)sub_FB8EC;
  dword_47AD48 = (int)sub_FB714;
  dword_47AE90 = (int)sub_FAF2C;
  dword_47AD54 = (int)sub_FAF10;
  dword_47AD58 = (int)sub_FAD40;
  dword_47AD5C = (int)sub_FAD48;
  dword_47AE10 = (int)sub_FAD50;
  dword_47AEA4 = 1027764;
  dword_47AE18 = (int)sub_FADF4;
  dword_47AE20 = (int)sub_FADB4;
  dword_47AE44 = 2;
  dword_47AE4C = 1027432;
  dword_47AE50 = (int)sub_FC084;
  dword_47AE54 = (int)sub_FC06C;
  dword_47AEFC = (int)sub_FAD80;
  dword_47AFEC = 3840;
  if ( !dword_47ACB0 )
  {
    dword_47ACB0 = (int)&unk_47AD0C;
    JUMPOUT(0x22ED9C);
  }
  v0 = (char *)sub_94728(
                 (int)"corelow.c",
                 1031,
                 "init_core_ops: core target already exists (\"%s\").",
                 (const char *)*(_DWORD *)(dword_47ACB0 + 8));
  return sub_FC224(v0);
}
