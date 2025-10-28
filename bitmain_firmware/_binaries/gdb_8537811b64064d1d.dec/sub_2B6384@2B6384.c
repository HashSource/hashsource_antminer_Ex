int __fastcall sub_2B6384(int a1, char a2)
{
  if ( (a2 & 0x7Fu) <= 0x3F )
  {
    sub_2A6A84("%B: Unknown mandatory EABI object attribute %d", a1);
    ((void (__fastcall *)(int))loc_2A6C70)(17);
    return 0;
  }
  else
  {
    sub_2A6A84("Warning: %B: Unknown EABI object attribute %d", a1);
    return 1;
  }
}
