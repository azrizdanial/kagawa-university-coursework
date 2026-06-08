document.querySelector("form").addEventListener("submit", (e) => {
  e.preventDefault();
  alert("お問い合わせありがとうございました！");
  e.target.reset();
});
