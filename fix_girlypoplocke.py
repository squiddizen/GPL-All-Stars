#!/usr/bin/env python3
import re

# Read the file
with open('/home/squiddonaut/GPLDev/GPL-All-Stars/src/data/pokemon/girlypoplocke_data.h', 'r') as f:
    content = f.read()

# Replace _("...") with just "..."
# This regex matches _("anything") and captures the content inside quotes
pattern = r'_\("([^"]+)"\)'
replacement = r'"\1"'

# Perform the replacement
content = re.sub(pattern, replacement, content)

# Write back to file
with open('/home/squiddonaut/GPLDev/GPL-All-Stars/src/data/pokemon/girlypoplocke_data.h', 'w') as f:
    f.write(content)

print("Fixed all _() macro usages in girlypoplocke_data.h")
