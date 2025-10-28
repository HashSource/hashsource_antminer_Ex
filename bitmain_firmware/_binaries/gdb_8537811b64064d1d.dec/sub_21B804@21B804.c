int __fastcall sub_21B804(_BYTE *a1)
{
  if ( (a1[20] & 0x1F) == 0xE )
    return *(_DWORD *)a1;
  else
    return sub_21B3EC((int)a1);
}
