# ifconfig -mac -print
ifconfig | grep "ether" | cut -d ' ' -f 2

# ether indica la MAC.

# grep "ether"
# Filtra la salida anterior y muestra solo las líneas que contienen la palabra "ether", que son las que 
# incluyen la MAC.

# cut -d ' ' -f 2

# cut divide la línea en campos usando un delimitador, en este caso un espacio ' '.
# -d ' ' → delimitar por espaco
# -f 2 → mostrar el segundo camo

# ifconfig | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
# ifconfig: Show the system network settings.
# grep: Search by text correspondence.
# -o -E: Search in the text the correspondence of pattern.
# ([[:xdigit:]]{1,2}:): Search for two hexadecimal digits followed by two-points.
# {5}: The previous sequence should occur exactly five times.
# [[:xdigit:]]{1,2}: Search the sequence of hexadecimal digits now without two points at the end.
