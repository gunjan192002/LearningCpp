function toggleMore() {
    var moreInfo = document.getElementById("more-info");
    var moreBtn = document.getElementById("more-btn");
  
    if (moreInfo.style.display === "none") {
      moreInfo.style.display = "block";
      moreBtn.textContent = "Show Less";
    } else {
      moreInfo.style.display = "none";
      moreBtn.textContent = "Show More";
    }
  }
  