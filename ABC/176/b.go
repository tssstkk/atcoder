package main
import (
  "fmt"
  "strings"
  "strconv"
  "log"
)
func main(){
  var s string
  fmt.Scan(&s)
  str := strings.Split(s, "")
  sum := 0
  for i := 0; i < len(str); i++ {
    a, err := strconv.Atoi(str[i])
    if err != nil {
      log.Fatal(err)
    }
    sum += a
  }
  if (sum % 9 == 0) {
    fmt.Println("Yes")
  } else {
    fmt.Println("No")
  }
}
